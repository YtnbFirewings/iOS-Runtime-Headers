/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSMutableArray, NSXPCConnection, Protocol;

@interface __NSXPCObjCServerClient : NSObject <NSXPCObject> {
    id _instance;
    int _invalid;
    NSMutableArray *_invalidHandlers;
    NSXPCConnection *_peer;
    Protocol *_protocol;
    int _started;
}

+ (id)clientWithXPCConnection:(struct _xpc_connection_s { }*)arg1 protocol:(id)arg2 instance:(id)arg3;

- (void)__invalidate;
- (void)addInvalidationHandler:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (void)start;

@end