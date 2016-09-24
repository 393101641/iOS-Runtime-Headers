/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNQuickActionsView : UIView <CNContactActionsViewControllerDelegate, CNQuickActionButtonDelegate, CNQuickActionsManagerDelegate, CNUIUserActionListConsumer, UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray * _actions;
    CNQuickActionsManager * _actionsManager;
    UIAlertController * _alertController;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedContentSize;
    NSArray * _categories;
    UICollectionViewFlowLayout * _collectionLayout;
    UICollectionView * _collectionView;
    CNContact * _contact;
    <CNQuickActionsViewDelegate> * _delegate;
    CNQuickAction * _performingAction;
    BOOL  _showBackgroundPlatters;
    BOOL  _showTitles;
    BOOL  _sortsWithDuet;
    NSDictionary * _titleTextAttributes;
    BOOL  _useDuetIfAvailable;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) CNQuickActionsManager *actionsManager;
@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedContentSize;
@property (nonatomic, copy) NSArray *categories;
@property (nonatomic, retain) UICollectionViewFlowLayout *collectionLayout;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNQuickActionsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) double interspace;
@property (nonatomic, readonly) double maximumWidth;
@property (nonatomic, retain) CNQuickAction *performingAction;
@property (nonatomic) BOOL showBackgroundPlatters;
@property (nonatomic) BOOL showTitles;
@property (nonatomic) BOOL sortsWithDuet;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *titleTextAttributes;
@property (nonatomic) BOOL useDuetIfAvailable;

+ (id)actionsManagerForContact:(id)arg1;
+ (id)defaultCategories;
+ (id)descriptorForRequiredKeys;
+ (BOOL)hasActionsForContact:(id)arg1;
+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_updateActions;
- (float)_widthForButtonCount:(int)arg1 itemSize:(struct CGSize { double x1; double x2; }*)arg2;
- (id)actions;
- (id)actionsManager;
- (void)actionsManager:(id)arg1 actionDidPerform:(id)arg2;
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;
- (id)alertController;
- (struct CGSize { double x1; double x2; })cachedContentSize;
- (id)categories;
- (id)collectionLayout;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)contact;
- (void)contactActionsViewController:(id)arg1 didSelectAction:(id)arg2;
- (id)delegate;
- (id)initWithContact:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)interspace;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (float)maximumWidth;
- (void)performAction:(id)arg1;
- (id)performingAction;
- (BOOL)quickActionButton:(id)arg1 performAction:(id)arg2;
- (void)reloadData;
- (void)setActions:(id)arg1;
- (void)setActionsManager:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setCachedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCategories:(id)arg1;
- (void)setCollectionLayout:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterspace:(float)arg1;
- (void)setPerformingAction:(id)arg1;
- (void)setShowBackgroundPlatters:(BOOL)arg1;
- (void)setShowTitles:(BOOL)arg1;
- (void)setSortsWithDuet:(BOOL)arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (void)setUseDuetIfAvailable:(BOOL)arg1;
- (BOOL)showBackgroundPlatters;
- (void)showDisambiguationControllerWithDataSource:(id)arg1 actionType:(id)arg2 onController:(id)arg3 sourceView:(id)arg4;
- (BOOL)showTitles;
- (BOOL)sortsWithDuet;
- (id)titleTextAttributes;
- (void)updateContentSize;
- (BOOL)useDuetIfAvailable;
- (void)willMoveToWindow:(id)arg1;

@end