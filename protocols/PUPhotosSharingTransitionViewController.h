/* Generated by RuntimeBrowser.
 */

@protocol PUPhotosSharingTransitionViewController <NSObject>

@required

- (UIView *)embeddedActivityView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })embeddedActivityViewFrameWhenShowing:(BOOL)arg1;
- (void)setPhotosSharingTransitionContext:(PUPhotosSharingTransitionContext *)arg1;
- (void)setPhotosSharingTransitionLayout:(UICollectionViewLayout *)arg1 animated:(BOOL)arg2;
- (UICollectionView *)transitionCollectionView;

@end