/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSMutableArray, NSArray;

@interface SWIntervalSnapshotObserver : NSObject <SWRunWorkoutObserver> {
    NSMutableArray *_snapshots;
    unsigned int _timeIntervalInSeconds;
    float _distanceIntervalInMiles;
    float _calorieInterval;
    unsigned int _previousTimeSnapshotIndex;
    unsigned int _previousDistanceSnapshotIndex;
    unsigned int _previousCalorieSnapshotIndex;
}

@property(readonly) NSArray * snapshots;


- (void)dealloc;
- (id)_init;
- (id)snapshots;
- (id)initWithCalorieInterval:(float)arg1;
- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned int)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
- (void)adjustSnapshotsForDistanceScaleFactor:(float)arg1;
- (id)initWithTimeIntervalInSeconds:(unsigned int)arg1;
- (id)initWithDistanceIntervalInMiles:(float)arg1;

@end