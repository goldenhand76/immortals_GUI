// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: immo.proto

#include "immo.pb.h"
#include "immo.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace immo {

static const char* ImmoService_method_names[] = {
  "/immo.ImmoService/DiscoverNode",
  "/immo.ImmoService/AddNode",
  "/immo.ImmoService/ListNodes",
};

std::unique_ptr< ImmoService::Stub> ImmoService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ImmoService::Stub> stub(new ImmoService::Stub(channel, options));
  return stub;
}

ImmoService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_DiscoverNode_(ImmoService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AddNode_(ImmoService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListNodes_(ImmoService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ImmoService::Stub::DiscoverNode(::grpc::ClientContext* context, const ::immo::NodeRequest& request, ::immo::NodeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::immo::NodeRequest, ::immo::NodeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DiscoverNode_, context, request, response);
}

void ImmoService::Stub::async::DiscoverNode(::grpc::ClientContext* context, const ::immo::NodeRequest* request, ::immo::NodeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::immo::NodeRequest, ::immo::NodeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DiscoverNode_, context, request, response, std::move(f));
}

void ImmoService::Stub::async::DiscoverNode(::grpc::ClientContext* context, const ::immo::NodeRequest* request, ::immo::NodeResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DiscoverNode_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::immo::NodeResponse>* ImmoService::Stub::PrepareAsyncDiscoverNodeRaw(::grpc::ClientContext* context, const ::immo::NodeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::immo::NodeResponse, ::immo::NodeRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DiscoverNode_, context, request);
}

::grpc::ClientAsyncResponseReader< ::immo::NodeResponse>* ImmoService::Stub::AsyncDiscoverNodeRaw(::grpc::ClientContext* context, const ::immo::NodeRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDiscoverNodeRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ImmoService::Stub::AddNode(::grpc::ClientContext* context, const ::immo::NodeRequest& request, ::immo::NodeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::immo::NodeRequest, ::immo::NodeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AddNode_, context, request, response);
}

void ImmoService::Stub::async::AddNode(::grpc::ClientContext* context, const ::immo::NodeRequest* request, ::immo::NodeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::immo::NodeRequest, ::immo::NodeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AddNode_, context, request, response, std::move(f));
}

void ImmoService::Stub::async::AddNode(::grpc::ClientContext* context, const ::immo::NodeRequest* request, ::immo::NodeResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AddNode_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::immo::NodeResponse>* ImmoService::Stub::PrepareAsyncAddNodeRaw(::grpc::ClientContext* context, const ::immo::NodeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::immo::NodeResponse, ::immo::NodeRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AddNode_, context, request);
}

::grpc::ClientAsyncResponseReader< ::immo::NodeResponse>* ImmoService::Stub::AsyncAddNodeRaw(::grpc::ClientContext* context, const ::immo::NodeRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAddNodeRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ImmoService::Stub::ListNodes(::grpc::ClientContext* context, const ::immo::ListRequest& request, ::immo::ListResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::immo::ListRequest, ::immo::ListResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListNodes_, context, request, response);
}

void ImmoService::Stub::async::ListNodes(::grpc::ClientContext* context, const ::immo::ListRequest* request, ::immo::ListResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::immo::ListRequest, ::immo::ListResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListNodes_, context, request, response, std::move(f));
}

void ImmoService::Stub::async::ListNodes(::grpc::ClientContext* context, const ::immo::ListRequest* request, ::immo::ListResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListNodes_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::immo::ListResponse>* ImmoService::Stub::PrepareAsyncListNodesRaw(::grpc::ClientContext* context, const ::immo::ListRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::immo::ListResponse, ::immo::ListRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListNodes_, context, request);
}

::grpc::ClientAsyncResponseReader< ::immo::ListResponse>* ImmoService::Stub::AsyncListNodesRaw(::grpc::ClientContext* context, const ::immo::ListRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListNodesRaw(context, request, cq);
  result->StartCall();
  return result;
}

ImmoService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ImmoService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ImmoService::Service, ::immo::NodeRequest, ::immo::NodeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ImmoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::immo::NodeRequest* req,
             ::immo::NodeResponse* resp) {
               return service->DiscoverNode(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ImmoService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ImmoService::Service, ::immo::NodeRequest, ::immo::NodeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ImmoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::immo::NodeRequest* req,
             ::immo::NodeResponse* resp) {
               return service->AddNode(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ImmoService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ImmoService::Service, ::immo::ListRequest, ::immo::ListResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ImmoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::immo::ListRequest* req,
             ::immo::ListResponse* resp) {
               return service->ListNodes(ctx, req, resp);
             }, this)));
}

ImmoService::Service::~Service() {
}

::grpc::Status ImmoService::Service::DiscoverNode(::grpc::ServerContext* context, const ::immo::NodeRequest* request, ::immo::NodeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ImmoService::Service::AddNode(::grpc::ServerContext* context, const ::immo::NodeRequest* request, ::immo::NodeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ImmoService::Service::ListNodes(::grpc::ServerContext* context, const ::immo::ListRequest* request, ::immo::ListResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace immo
