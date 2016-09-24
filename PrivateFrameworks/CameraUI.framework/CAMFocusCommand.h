/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFocusCommand : CAMCaptureCommand {
    int  __focusMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  __focusPointOfInterest;
    BOOL  __shouldUseSmoothFocus;
}

@property (nonatomic, readonly) int _focusMode;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _focusPointOfInterest;
@property (nonatomic, readonly) BOOL _shouldUseSmoothFocus;

- (int)_focusMode;
- (struct CGPoint { double x1; double x2; })_focusPointOfInterest;
- (BOOL)_shouldUseSmoothFocus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocusMode:(int)arg1;
- (id)initWithFocusMode:(int)arg1 atPointOfInterest:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithFocusMode:(int)arg1 atPointOfInterest:(struct CGPoint { double x1; double x2; })arg2 smooth:(BOOL)arg3;
- (id)initWithFocusMode:(int)arg1 smooth:(BOOL)arg2;

@end