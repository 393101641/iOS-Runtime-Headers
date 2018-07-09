/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFContinuityRemoteSession : NSObject {
    bool  _activateCalled;
    id /* block */  _activateHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    NSMutableArray * _messageQueue;
    bool  _pairVerifyDone;
    bool  _pairVerifyRunning;
    SFDevice * _peerDevice;
    SFSession * _sfSession;
    bool  _sfSessionActivated;
    bool  _started;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) SFDevice *peerDevice;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_run;
- (void)_sendCommand:(int)arg1 options:(id)arg2;
- (void)_sendQueuedMesssages;
- (void)_sfSessionStart;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)peerDevice;
- (void)sendCommand:(int)arg1;
- (void)sendCommand:(int)arg1 options:(id)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPeerDevice:(id)arg1;

@end