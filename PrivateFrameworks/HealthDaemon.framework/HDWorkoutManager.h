/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDForegroundClientProcessObserver, HDHealthDaemonReadyObserver, HDWorkoutEventCollectorDelegate> {
    CMWorkoutManager * _cmWorkoutManager;
    NSMutableSet * _currentObservedTypes;
    _HDWorkoutData * _currentWorkout;
    NSMutableSet * _eventCollectors;
    BOOL  _isFirstLaunchAndNotYetSmoothed;
    CLLocationManager * _locationManager;
    HDWorkoutLocationSmoother * _locationSmoother;
    BOOL  _needToCheckForLocationSeriesOnUnlock;
    _HDWorkoutData * _nextWorkout;
    NSHashTable * _observerTable;
    HDPrimaryProfile * _primaryProfile;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _stopEventAfterPause;
    NSObject<OS_dispatch_source> * _suppressActivityKeepaliveTimer;
    BOOL  _waitingForStopEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_distanceTypeForActivityType:(unsigned int)arg1 isIndoor:(BOOL)arg2;
+ (id)observedTypesForActivityType:(unsigned int)arg1 isIndoor:(BOOL)arg2;

- (void).cxx_destruct;
- (void)_associationsSyncedForWorkout:(id)arg1;
- (int)_cmSwimLocationForHKSwimmingLocation:(int)arg1;
- (id)_coreMotionWorkoutManager;
- (id)_mainQueue_locationManager;
- (void)_queue_didUpdateCurrentWorkoutSession;
- (void)_queue_doSuppressActivityAlertsForWorkout:(id)arg1;
- (id)_queue_eventCollectors;
- (void)_queue_finishedLaunchingWorkoutApp:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_immediateUpdateWithCompletion:(id /* block */)arg1;
- (id)_queue_locationSmoother;
- (void)_queue_pauseCurrentSession;
- (void)_queue_resetActivityTypeForWorkoutSession:(id)arg1;
- (void)_queue_resumeCurrentSession;
- (void)_queue_sessionEnded;
- (void)_queue_setActivityType:(unsigned int)arg1 forSessionUUID:(id)arg2 isIndoor:(BOOL)arg3;
- (void)_queue_setActivityTypeForWorkoutSession:(id)arg1;
- (void)_queue_setCurrentSessionState:(int)arg1;
- (void)_queue_setSuppressActivityAlerts:(BOOL)arg1 forWorkout:(id)arg2;
- (void)_queue_setViewOnWake:(BOOL)arg1 forWorkout:(id)arg2;
- (void)_queue_smoothAllUnsmoothedLocationSeries;
- (void)_queue_startBackgroundExecutionForWorkout:(id)arg1;
- (void)_queue_startDataAndEventCollection;
- (void)_queue_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_startWorkout:(id)arg1;
- (void)_queue_stopBackgroundExecution;
- (void)_queue_stopCurrentSessionWaitingForStopEvent:(BOOL)arg1;
- (void)_queue_stopDataAndEventCollection;
- (void)_sendStartWorkoutAppResponse:(id /* block */)arg1 error:(id)arg2;
- (void)_setupLocationObserversIfNeeded;
- (id)_workoutSessionNotCurrentError:(id)arg1;
- (void)addWorkoutEventObserver:(id)arg1;
- (void)clientInvalidated:(id)arg1;
- (unsigned int)currentWorkoutActivityType;
- (id)currentWorkoutClient;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)foregroundClientProcessesDidChange:(id)arg1;
- (void)generateMarkerEventWithDate:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)hasAnyActiveWorkouts;
- (void)hk_fakeLapEventWithDate:(id)arg1 strokeStyle:(int)arg2;
- (void)hk_fakeStopEventWithDate:(id)arg1;
- (id)initWithPrimaryProfile:(id)arg1;
- (void)pauseCurrentWorkoutWithCompletion:(id /* block */)arg1;
- (void)pauseWorkoutSessionWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)pluginHasBackgroundRunMode:(id)arg1 errorOut:(id*)arg2;
- (void)receivedStartWorkoutAppRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)receivedWorkoutEvent:(id)arg1;
- (void)removeWorkoutEventObserver:(id)arg1;
- (void)resumeCurrentWorkoutWithCompletion:(id /* block */)arg1;
- (void)resumeWorkoutSessionWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(id /* block */)arg3;
- (void)startWorkoutSession:(id)arg1 client:(id)arg2 server:(id)arg3 isFirstParty:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)stopWorkoutSessionWithUUID:(id)arg1 completion:(id /* block */)arg2;

@end