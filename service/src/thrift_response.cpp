/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "pancake_thrift_response.h"




pancake_thrift_response_async_get_args::~pancake_thrift_response_async_get_args() throw() {
}


uint32_t pancake_thrift_response_async_get_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->seq_id.read(iprot);
          this->__isset.seq_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->result);
          this->__isset.result = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t pancake_thrift_response_async_get_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("pancake_thrift_response_async_get_args");

  xfer += oprot->writeFieldBegin("seq_id", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->seq_id.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("result", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->result);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


pancake_thrift_response_async_get_pargs::~pancake_thrift_response_async_get_pargs() throw() {
}


uint32_t pancake_thrift_response_async_get_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("pancake_thrift_response_async_get_pargs");

  xfer += oprot->writeFieldBegin("seq_id", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += (*(this->seq_id)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("result", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString((*(this->result)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


pancake_thrift_response_async_put_args::~pancake_thrift_response_async_put_args() throw() {
}


uint32_t pancake_thrift_response_async_put_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->seq_id.read(iprot);
          this->__isset.seq_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->key);
          this->__isset.key = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->value);
          this->__isset.value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t pancake_thrift_response_async_put_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("pancake_thrift_response_async_put_args");

  xfer += oprot->writeFieldBegin("seq_id", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->seq_id.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("key", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->key);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->value);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


pancake_thrift_response_async_put_pargs::~pancake_thrift_response_async_put_pargs() throw() {
}


uint32_t pancake_thrift_response_async_put_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("pancake_thrift_response_async_put_pargs");

  xfer += oprot->writeFieldBegin("seq_id", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += (*(this->seq_id)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("key", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString((*(this->key)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString((*(this->value)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


pancake_thrift_response_async_get_batch_args::~pancake_thrift_response_async_get_batch_args() throw() {
}


uint32_t pancake_thrift_response_async_get_batch_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->seq_id.read(iprot);
          this->__isset.seq_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->keys.clear();
            uint32_t _size55;
            ::apache::thrift::protocol::TType _etype58;
            xfer += iprot->readListBegin(_etype58, _size55);
            this->keys.resize(_size55);
            uint32_t _i59;
            for (_i59 = 0; _i59 < _size55; ++_i59)
            {
              xfer += iprot->readString(this->keys[_i59]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.keys = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t pancake_thrift_response_async_get_batch_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("pancake_thrift_response_async_get_batch_args");

  xfer += oprot->writeFieldBegin("seq_id", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->seq_id.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("keys", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->keys.size()));
    std::vector<std::string> ::const_iterator _iter60;
    for (_iter60 = this->keys.begin(); _iter60 != this->keys.end(); ++_iter60)
    {
      xfer += oprot->writeString((*_iter60));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


pancake_thrift_response_async_get_batch_pargs::~pancake_thrift_response_async_get_batch_pargs() throw() {
}


uint32_t pancake_thrift_response_async_get_batch_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("pancake_thrift_response_async_get_batch_pargs");

  xfer += oprot->writeFieldBegin("seq_id", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += (*(this->seq_id)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("keys", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*(this->keys)).size()));
    std::vector<std::string> ::const_iterator _iter61;
    for (_iter61 = (*(this->keys)).begin(); _iter61 != (*(this->keys)).end(); ++_iter61)
    {
      xfer += oprot->writeString((*_iter61));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


pancake_thrift_response_async_put_batch_args::~pancake_thrift_response_async_put_batch_args() throw() {
}


uint32_t pancake_thrift_response_async_put_batch_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->seq_id.read(iprot);
          this->__isset.seq_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->keys.clear();
            uint32_t _size62;
            ::apache::thrift::protocol::TType _etype65;
            xfer += iprot->readListBegin(_etype65, _size62);
            this->keys.resize(_size62);
            uint32_t _i66;
            for (_i66 = 0; _i66 < _size62; ++_i66)
            {
              xfer += iprot->readString(this->keys[_i66]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.keys = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->values.clear();
            uint32_t _size67;
            ::apache::thrift::protocol::TType _etype70;
            xfer += iprot->readListBegin(_etype70, _size67);
            this->values.resize(_size67);
            uint32_t _i71;
            for (_i71 = 0; _i71 < _size67; ++_i71)
            {
              xfer += iprot->readString(this->values[_i71]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.values = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t pancake_thrift_response_async_put_batch_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("pancake_thrift_response_async_put_batch_args");

  xfer += oprot->writeFieldBegin("seq_id", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->seq_id.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("keys", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->keys.size()));
    std::vector<std::string> ::const_iterator _iter72;
    for (_iter72 = this->keys.begin(); _iter72 != this->keys.end(); ++_iter72)
    {
      xfer += oprot->writeString((*_iter72));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("values", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->values.size()));
    std::vector<std::string> ::const_iterator _iter73;
    for (_iter73 = this->values.begin(); _iter73 != this->values.end(); ++_iter73)
    {
      xfer += oprot->writeString((*_iter73));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


pancake_thrift_response_async_put_batch_pargs::~pancake_thrift_response_async_put_batch_pargs() throw() {
}


uint32_t pancake_thrift_response_async_put_batch_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("pancake_thrift_response_async_put_batch_pargs");

  xfer += oprot->writeFieldBegin("seq_id", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += (*(this->seq_id)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("keys", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*(this->keys)).size()));
    std::vector<std::string> ::const_iterator _iter74;
    for (_iter74 = (*(this->keys)).begin(); _iter74 != (*(this->keys)).end(); ++_iter74)
    {
      xfer += oprot->writeString((*_iter74));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("values", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*(this->values)).size()));
    std::vector<std::string> ::const_iterator _iter75;
    for (_iter75 = (*(this->values)).begin(); _iter75 != (*(this->values)).end(); ++_iter75)
    {
      xfer += oprot->writeString((*_iter75));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void pancake_thrift_responseClient::async_get(const sequence_id& seq_id, const std::string& result)
{
  send_async_get(seq_id, result);
}

void pancake_thrift_responseClient::send_async_get(const sequence_id& seq_id, const std::string& result)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("async_get", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  pancake_thrift_response_async_get_pargs args;
  args.seq_id = &seq_id;
  args.result = &result;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void pancake_thrift_responseClient::async_put(const sequence_id& seq_id, const std::string& key, const std::string& value)
{
  send_async_put(seq_id, key, value);
}

void pancake_thrift_responseClient::send_async_put(const sequence_id& seq_id, const std::string& key, const std::string& value)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("async_put", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  pancake_thrift_response_async_put_pargs args;
  args.seq_id = &seq_id;
  args.key = &key;
  args.value = &value;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void pancake_thrift_responseClient::async_get_batch(const sequence_id& seq_id, const std::vector<std::string> & keys)
{
  send_async_get_batch(seq_id, keys);
}

void pancake_thrift_responseClient::send_async_get_batch(const sequence_id& seq_id, const std::vector<std::string> & keys)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("async_get_batch", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  pancake_thrift_response_async_get_batch_pargs args;
  args.seq_id = &seq_id;
  args.keys = &keys;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void pancake_thrift_responseClient::async_put_batch(const sequence_id& seq_id, const std::vector<std::string> & keys, const std::vector<std::string> & values)
{
  send_async_put_batch(seq_id, keys, values);
}

void pancake_thrift_responseClient::send_async_put_batch(const sequence_id& seq_id, const std::vector<std::string> & keys, const std::vector<std::string> & values)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("async_put_batch", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  pancake_thrift_response_async_put_batch_pargs args;
  args.seq_id = &seq_id;
  args.keys = &keys;
  args.values = &values;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

bool pancake_thrift_responseProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void pancake_thrift_responseProcessor::process_async_get(int32_t, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol*, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("pancake_thrift_response.async_get", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "pancake_thrift_response.async_get");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "pancake_thrift_response.async_get");
  }

  pancake_thrift_response_async_get_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "pancake_thrift_response.async_get", bytes);
  }

  try {
    iface_->async_get(args.seq_id, args.result);
  } catch (const std::exception&) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "pancake_thrift_response.async_get");
    }
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->asyncComplete(ctx, "pancake_thrift_response.async_get");
  }

  return;
}

void pancake_thrift_responseProcessor::process_async_put(int32_t, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol*, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("pancake_thrift_response.async_put", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "pancake_thrift_response.async_put");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "pancake_thrift_response.async_put");
  }

  pancake_thrift_response_async_put_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "pancake_thrift_response.async_put", bytes);
  }

  try {
    iface_->async_put(args.seq_id, args.key, args.value);
  } catch (const std::exception&) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "pancake_thrift_response.async_put");
    }
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->asyncComplete(ctx, "pancake_thrift_response.async_put");
  }

  return;
}

void pancake_thrift_responseProcessor::process_async_get_batch(int32_t, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol*, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("pancake_thrift_response.async_get_batch", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "pancake_thrift_response.async_get_batch");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "pancake_thrift_response.async_get_batch");
  }

  pancake_thrift_response_async_get_batch_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "pancake_thrift_response.async_get_batch", bytes);
  }

  try {
    iface_->async_get_batch(args.seq_id, args.keys);
  } catch (const std::exception&) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "pancake_thrift_response.async_get_batch");
    }
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->asyncComplete(ctx, "pancake_thrift_response.async_get_batch");
  }

  return;
}

void pancake_thrift_responseProcessor::process_async_put_batch(int32_t, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol*, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("pancake_thrift_response.async_put_batch", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "pancake_thrift_response.async_put_batch");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "pancake_thrift_response.async_put_batch");
  }

  pancake_thrift_response_async_put_batch_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "pancake_thrift_response.async_put_batch", bytes);
  }

  try {
    iface_->async_put_batch(args.seq_id, args.keys, args.values);
  } catch (const std::exception&) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "pancake_thrift_response.async_put_batch");
    }
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->asyncComplete(ctx, "pancake_thrift_response.async_put_batch");
  }

  return;
}

::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > pancake_thrift_responseProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< pancake_thrift_responseIfFactory > cleanup(handlerFactory_);
  ::apache::thrift::stdcxx::shared_ptr< pancake_thrift_responseIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > processor(new pancake_thrift_responseProcessor(handler));
  return processor;
}

void pancake_thrift_responseConcurrentClient::async_get(const sequence_id& seq_id, const std::string& result)
{
  send_async_get(seq_id, result);
}

void pancake_thrift_responseConcurrentClient::send_async_get(const sequence_id& seq_id, const std::string& result)
{
  int32_t cseqid = 0;
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("async_get", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  pancake_thrift_response_async_get_pargs args;
  args.seq_id = &seq_id;
  args.result = &result;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
}

void pancake_thrift_responseConcurrentClient::async_put(const sequence_id& seq_id, const std::string& key, const std::string& value)
{
  send_async_put(seq_id, key, value);
}

void pancake_thrift_responseConcurrentClient::send_async_put(const sequence_id& seq_id, const std::string& key, const std::string& value)
{
  int32_t cseqid = 0;
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("async_put", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  pancake_thrift_response_async_put_pargs args;
  args.seq_id = &seq_id;
  args.key = &key;
  args.value = &value;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
}

void pancake_thrift_responseConcurrentClient::async_get_batch(const sequence_id& seq_id, const std::vector<std::string> & keys)
{
  send_async_get_batch(seq_id, keys);
}

void pancake_thrift_responseConcurrentClient::send_async_get_batch(const sequence_id& seq_id, const std::vector<std::string> & keys)
{
  int32_t cseqid = 0;
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("async_get_batch", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  pancake_thrift_response_async_get_batch_pargs args;
  args.seq_id = &seq_id;
  args.keys = &keys;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
}

void pancake_thrift_responseConcurrentClient::async_put_batch(const sequence_id& seq_id, const std::vector<std::string> & keys, const std::vector<std::string> & values)
{
  send_async_put_batch(seq_id, keys, values);
}

void pancake_thrift_responseConcurrentClient::send_async_put_batch(const sequence_id& seq_id, const std::vector<std::string> & keys, const std::vector<std::string> & values)
{
  int32_t cseqid = 0;
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("async_put_batch", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  pancake_thrift_response_async_put_batch_pargs args;
  args.seq_id = &seq_id;
  args.keys = &keys;
  args.values = &values;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
}



