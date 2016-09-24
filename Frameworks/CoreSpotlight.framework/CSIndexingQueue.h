/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSIndexingQueue : NSObject {
    NSObject<OS_dispatch_queue> * _coalescingQueue;
    NSObject<OS_dispatch_source> * _coalescingTimer;
    double  _idleTime;
    double  _idleTimeLeeway;
    double  _lastPush;
    <CSIndexQueuableItem> * _lastPushedItem;
    unsigned int  _maximumBatchSize;
    int  _mode;
    id /* block */  _notifyBlock;
    NSMutableDictionary * _queuedItems;
    BOOL  _timerArmed;
}

@property (retain) NSObject<OS_dispatch_queue> *coalescingQueue;
@property (retain) NSObject<OS_dispatch_source> *coalescingTimer;
@property double idleTime;
@property double idleTimeLeeway;
@property double lastPush;
@property (nonatomic, retain) <CSIndexQueuableItem> *lastPushedItem;
@property unsigned int maximumBatchSize;
@property int mode;
@property (copy) id /* block */ notifyBlock;
@property (retain) NSMutableDictionary *queuedItems;
@property BOOL timerArmed;

- (void).cxx_destruct;
- (void)_applicationWillResign:(id)arg1;
- (void)_flushWithAppResigned:(BOOL)arg1 forced:(BOOL)arg2;
- (void)_pushLastItem:(id)arg1 time:(double)arg2;
- (void)_queueItems:(id)arg1;
- (id)coalescingQueue;
- (id)coalescingTimer;
- (void)dealloc;
- (void)flush;
- (double)idleTime;
- (double)idleTimeLeeway;
- (id)initWithIdleTime:(double)arg1 idleTimeLeeway:(double)arg2 maximumBatchSize:(unsigned int)arg3 mode:(int)arg4 notifyBlock:(id /* block */)arg5;
- (id)initWithMode:(int)arg1 notifyBlock:(id /* block */)arg2;
- (double)lastPush;
- (id)lastPushedItem;
- (unsigned int)maximumBatchSize;
- (int)mode;
- (id /* block */)notifyBlock;
- (void)queueItem:(id)arg1;
- (void)queueItems:(id)arg1;
- (id)queuedItems;
- (void)setCoalescingQueue:(id)arg1;
- (void)setCoalescingTimer:(id)arg1;
- (void)setIdleTime:(double)arg1;
- (void)setIdleTimeLeeway:(double)arg1;
- (void)setLastPush:(double)arg1;
- (void)setLastPushedItem:(id)arg1;
- (void)setMaximumBatchSize:(unsigned int)arg1;
- (void)setMode:(int)arg1;
- (void)setNotifyBlock:(id /* block */)arg1;
- (void)setQueuedItems:(id)arg1;
- (void)setTimerArmed:(BOOL)arg1;
- (BOOL)timerArmed;

@end