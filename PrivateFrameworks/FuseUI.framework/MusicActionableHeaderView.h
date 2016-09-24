/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicActionableHeaderView : UIView {
    BOOL  _actionable;
    struct { 
        double titleBaselineOffsetFromBottom; 
        double titleBaselineOffsetFromTop; 
        int titleFontTextStyle; 
        int titleFontWeight; 
    }  _actionableHeaderMetrics;
    <MusicActionableHeaderViewDelegate> * _delegate;
    MPUFontDescriptor * _headerFontDescriptor;
    NSString * _headerTitle;
    UIColor * _headerTitleColor;
    MusicImageAccessoryButton * _imageAccessoryButton;
}

@property (getter=isActionable, nonatomic) BOOL actionable;
@property (nonatomic) struct { double x1; double x2; int x3; int x4; } actionableHeaderMetrics;
@property (nonatomic) <MusicActionableHeaderViewDelegate> *delegate;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, retain) UIColor *headerTitleColor;

+ (struct { double x1; double x2; int x3; int x4; })actionableHeaderMetricsForContainerViewController:(id)arg1;
+ (struct { double x1; double x2; int x3; int x4; })defaultActionableHeaderMetrics;
+ (float)heightForTraitCollection:(id)arg1;
+ (float)heightForTraitCollection:(id)arg1 withActionableHeaderMetrics:(struct { double x1; double x2; int x3; int x4; })arg2;

- (void).cxx_destruct;
- (void)_handleButtonTapped:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_headerTitleColorDidChange;
- (void)_updateHeaderAttributedText;
- (void)_updateHeaderFontDescriptor;
- (struct { double x1; double x2; int x3; int x4; })actionableHeaderMetrics;
- (void)dealloc;
- (id)delegate;
- (id)headerTitle;
- (id)headerTitleColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isActionable;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)setActionable:(BOOL)arg1;
- (void)setActionableHeaderMetrics:(struct { double x1; double x2; int x3; int x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderTitleColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end