//
// Created by Lloyd Brown on 9/3/19.
//
#include "storage_interface.h"
#include "redis.h"
//#include "memcached.h"
#include "rocksdb.h"
#include <iostream>

struct options {
    bool testing_redis;
    bool testing_memcached;
    bool testing_rocksdb;
};

int usage();

void run_basic_test(storage_interface * client){
    std::string one = "1";
    std::string two = "2";
    std::cout << "Testing basic put" << std::endl;
    client->put(one,two);

    std::cout << "Testing basic get" << std::endl;
    assert(client->get(one) == "2");

    std::cout << "Testing basic multiput" << std::endl;
    std::vector<std::string> keys, values;
    for (int i = 0; i < 1000; i++){
        keys.push_back(std::to_string(i));
        values.push_back(std::to_string(i+1));
    }
    client->put_batch(&keys, &values);

    std::cout << "Testing basic multiget" << std::endl;
    auto return_vector = client->get_batch(&keys);
    int i = 0;
    for (auto value: return_vector){
        assert(value == values[i]);
        i++;
    }
    std::cout << "Passed all tests :)" << std::endl;
}

int main(int argc, char* argv[]) {
    options opts;
    for (int i = 1; i < argc; ++i) {
        if (std::strcmp(argv[i], "--redis") == 0)
            opts.testing_redis = true;
        else if (std::strcmp(argv[i], "--rocksdb") == 0)
            opts.testing_rocksdb = true;
        else if (std::strcmp(argv[i], "--memcached") == 0)
            opts.testing_memcached = true;
    }

    if (opts.testing_redis){
        auto redis_client = new redis("127.0.0.1", 5000);
        run_basic_test(redis_client);
    }

    if (opts.testing_rocksdb){
        auto rocksdb_client = new rocksdb("127.0.0.1", 5001);
        run_basic_test(rocksdb_client);
    }

    if (opts.testing_memcached){
        //auto memcached_client = new memcached("127.0.0.1", 5002);
        //run_basic_test(memcached_client)
    }
}