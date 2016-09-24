/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMUserPreferences : NSObject {
    CAMCaptureConfiguration * _captureConfiguration;
    CAMConflictingControlConfiguration * _conflictingControlConfiguration;
    BOOL  _didResetTorchMode;
    BOOL  _lockAsShutterEnabled;
    int  _overriddenBackCaptureInterval;
    int  _overriddenFrontCaptureInterval;
    int  _previewViewAspectMode;
    NSDate * _resetTimeoutDate;
    BOOL  _shouldCaptureHDREV0;
    BOOL  _shouldDelayRemotePersistence;
    BOOL  _shouldDisableCameraSwitchingDuringVideoRecording;
    BOOL  _shouldShowGridView;
    int  _slomoConfiguration;
    NSUserDefaults * _underlyingUserDefaults;
    int  _videoConfiguration;
}

@property (nonatomic, retain) CAMCaptureConfiguration *captureConfiguration;
@property (nonatomic, retain) CAMConflictingControlConfiguration *conflictingControlConfiguration;
@property (setter=_setDidResetTorchMode:, nonatomic) BOOL didResetTorchMode;
@property (getter=isLockAsShutterEnabled, nonatomic, readonly) BOOL lockAsShutterEnabled;
@property (nonatomic, readonly) int overriddenBackCaptureInterval;
@property (nonatomic, readonly) int overriddenFrontCaptureInterval;
@property (nonatomic) int previewViewAspectMode;
@property (setter=_setResetTimeoutDate:, nonatomic, retain) NSDate *resetTimeoutDate;
@property (nonatomic, readonly) BOOL shouldCaptureHDREV0;
@property (nonatomic, readonly) BOOL shouldDelayRemotePersistence;
@property (nonatomic, readonly) BOOL shouldDisableCameraSwitchingDuringVideoRecording;
@property (nonatomic, readonly) BOOL shouldShowGridView;
@property (nonatomic, readonly) int slomoConfiguration;
@property (getter=_underlyingUserDefaults, setter=_setUnderlyingUserDefaults:, nonatomic, retain) NSUserDefaults *underlyingUserDefaults;
@property (nonatomic, readonly) int videoConfiguration;

+ (id)_defaultCaptureConfiguration;
+ (id)preferences;

- (void).cxx_destruct;
- (void)_setDidResetTorchMode:(BOOL)arg1;
- (void)_setResetTimeoutDate:(id)arg1;
- (void)_setUnderlyingUserDefaults:(id)arg1;
- (id)_underlyingUserDefaults;
- (id)captureConfiguration;
- (id)conflictingControlConfiguration;
- (BOOL)didResetTorchMode;
- (BOOL)isLockAsShutterEnabled;
- (int)overriddenBackCaptureInterval;
- (int)overriddenFrontCaptureInterval;
- (int)previewViewAspectMode;
- (void)readPreferences;
- (BOOL)readPreferencesWithLaunchOptions:(id)arg1 emulationMode:(int)arg2;
- (id)resetTimeoutDate;
- (void)setCaptureConfiguration:(id)arg1;
- (void)setConflictingControlConfiguration:(id)arg1;
- (void)setPreviewViewAspectMode:(int)arg1;
- (BOOL)shouldCaptureHDREV0;
- (BOOL)shouldDelayRemotePersistence;
- (BOOL)shouldDisableCameraSwitchingDuringVideoRecording;
- (BOOL)shouldResetCaptureConfiguration;
- (BOOL)shouldShowGridView;
- (int)slomoConfiguration;
- (int)videoConfiguration;
- (void)writePreferences;

@end