/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPreviewForceInteractionProgress : UIInteractionProgress <_UIForceLevelClassifierDelegate> {
    _UIForceLevelClassifier * _classifier;
    NSObservation * _classifierObservation;
    BOOL  _completesAtTargetState;
    BOOL  _didEnd;
    BOOL  _enteredMinimumState;
    NSObservation * _gestureBeganObservation;
    int  _minimumState;
    _UITouchForceObservable * _observable;
    NSObservation * _progressObservation;
    int  _targetState;
    NSObservation * _targetStateUpdateObservation;
    BOOL  _updateMinimumStateWithTargetState;
}

@property (setter=_setClassifierShouldRespectSystemGestureTouchFiltering:, nonatomic) BOOL _classifierShouldRespectSystemGestureTouchFiltering;
@property (setter=_setTargetState:, nonatomic) int _targetState;
@property (nonatomic) BOOL completesAtTargetState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_classifierShouldRespectSystemGestureTouchFiltering;
- (void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(int)arg2;
- (void)_forceLevelClassifierDidReset:(id)arg1;
- (void)_gestureRecognizerBegan:(BOOL)arg1;
- (id)_initWithObservable:(id)arg1 targetState:(int)arg2 minimumRequiredState:(int)arg3;
- (id)_initWithObservable:(id)arg1 targetState:(int)arg2 minimumRequiredState:(int)arg3 useLinearClassifier:(BOOL)arg4;
- (id)_initWithView:(id)arg1 targetState:(int)arg2 minimumRequiredState:(int)arg3 useLinearClassifier:(BOOL)arg4;
- (void)_installProgressObserver;
- (void)_setClassifierShouldRespectSystemGestureTouchFiltering:(BOOL)arg1;
- (void)_setTargetState:(int)arg1;
- (int)_targetState;
- (BOOL)completesAtTargetState;
- (BOOL)didEnd;
- (BOOL)enteredMinimumState;
- (id)initWithGestureRecognizer:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1 minimumRequiredState:(int)arg2;
- (id)initWithView:(id)arg1 targetState:(int)arg2;
- (id)initWithView:(id)arg1 targetState:(int)arg2 minimumRequiredState:(int)arg3;
- (void)setCompletesAtTargetState:(BOOL)arg1;

@end