/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef pancake_thrift_response_H
#define pancake_thrift_response_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "proxy_types.h"



#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class pancake_thrift_responseIf {
 public:
  virtual ~pancake_thrift_responseIf() {}
  virtual void async_response(const sequence_id& seq_id, const int32_t op_code, const std::vector<std::string> & result) = 0;
};

class pancake_thrift_responseIfFactory {
 public:
  typedef pancake_thrift_responseIf Handler;

  virtual ~pancake_thrift_responseIfFactory() {}

  virtual pancake_thrift_responseIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(pancake_thrift_responseIf* /* handler */) = 0;
};

class pancake_thrift_responseIfSingletonFactory : virtual public pancake_thrift_responseIfFactory {
 public:
  pancake_thrift_responseIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<pancake_thrift_responseIf>& iface) : iface_(iface) {}
  virtual ~pancake_thrift_responseIfSingletonFactory() {}

  virtual pancake_thrift_responseIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(pancake_thrift_responseIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<pancake_thrift_responseIf> iface_;
};

class pancake_thrift_responseNull : virtual public pancake_thrift_responseIf {
 public:
  virtual ~pancake_thrift_responseNull() {}
  void async_response(const sequence_id& /* seq_id */, const int32_t /* op_code */, const std::vector<std::string> & /* result */) {
    return;
  }
};

typedef struct _pancake_thrift_response_async_response_args__isset {
  _pancake_thrift_response_async_response_args__isset() : seq_id(false), op_code(false), result(false) {}
  bool seq_id :1;
  bool op_code :1;
  bool result :1;
} _pancake_thrift_response_async_response_args__isset;

class pancake_thrift_response_async_response_args {
 public:

  pancake_thrift_response_async_response_args(const pancake_thrift_response_async_response_args&);
  pancake_thrift_response_async_response_args& operator=(const pancake_thrift_response_async_response_args&);
  pancake_thrift_response_async_response_args() : op_code(0) {
  }

  virtual ~pancake_thrift_response_async_response_args() throw();
  sequence_id seq_id;
  int32_t op_code;
  std::vector<std::string>  result;

  _pancake_thrift_response_async_response_args__isset __isset;

  void __set_seq_id(const sequence_id& val);

  void __set_op_code(const int32_t val);

  void __set_result(const std::vector<std::string> & val);

  bool operator == (const pancake_thrift_response_async_response_args & rhs) const
  {
    if (!(seq_id == rhs.seq_id))
      return false;
    if (!(op_code == rhs.op_code))
      return false;
    if (!(result == rhs.result))
      return false;
    return true;
  }
  bool operator != (const pancake_thrift_response_async_response_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const pancake_thrift_response_async_response_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class pancake_thrift_response_async_response_pargs {
 public:


  virtual ~pancake_thrift_response_async_response_pargs() throw();
  const sequence_id* seq_id;
  const int32_t* op_code;
  const std::vector<std::string> * result;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class pancake_thrift_responseClient : virtual public pancake_thrift_responseIf {
 public:
  pancake_thrift_responseClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  pancake_thrift_responseClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void async_response(const sequence_id& seq_id, const int32_t op_code, const std::vector<std::string> & result);
  void send_async_response(const sequence_id& seq_id, const int32_t op_code, const std::vector<std::string> & result);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class pancake_thrift_responseProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<pancake_thrift_responseIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (pancake_thrift_responseProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_async_response(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  pancake_thrift_responseProcessor(::apache::thrift::stdcxx::shared_ptr<pancake_thrift_responseIf> iface) :
    iface_(iface) {
    processMap_["async_response"] = &pancake_thrift_responseProcessor::process_async_response;
  }

  virtual ~pancake_thrift_responseProcessor() {}
};

class pancake_thrift_responseProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  pancake_thrift_responseProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< pancake_thrift_responseIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< pancake_thrift_responseIfFactory > handlerFactory_;
};

class pancake_thrift_responseMultiface : virtual public pancake_thrift_responseIf {
 public:
  pancake_thrift_responseMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<pancake_thrift_responseIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~pancake_thrift_responseMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<pancake_thrift_responseIf> > ifaces_;
  pancake_thrift_responseMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<pancake_thrift_responseIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void async_response(const sequence_id& seq_id, const int32_t op_code, const std::vector<std::string> & result) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->async_response(seq_id, op_code, result);
    }
    ifaces_[i]->async_response(seq_id, op_code, result);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class pancake_thrift_responseConcurrentClient : virtual public pancake_thrift_responseIf {
 public:
  pancake_thrift_responseConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  pancake_thrift_responseConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void async_response(const sequence_id& seq_id, const int32_t op_code, const std::vector<std::string> & result);
  void send_async_response(const sequence_id& seq_id, const int32_t op_code, const std::vector<std::string> & result);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif



#endif