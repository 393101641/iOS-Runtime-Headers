/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImage, NSString, WebScriptObject, SUScriptCanvasContext;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem> {
    id _action;
    SUScriptCanvasContext *_canvas;
    BOOL _shouldPerformDefaultAction;
    WebScriptObject *_target;
}

@property(retain) UIImage * image;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } imageEdgeInsets;
@property BOOL shouldPerformDefaultAction;
@property(retain) id action;
@property(retain) SUScriptCanvasContext * canvas;
@property BOOL enabled;
@property BOOL loading;
@property(readonly) id showingConfirmation;
@property(retain) NSString * subtitle;
@property(retain) NSString * style;
@property int tag;
@property(retain) NSString * title;
@property(retain) WebScriptObject * target;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)setLoading:(BOOL)arg1;
- (BOOL)loading;
- (void)setShouldPerformDefaultAction:(BOOL)arg1;
- (BOOL)shouldPerformDefaultAction;
- (id)_systemItemString;
- (id)showingConfirmation;
- (void)setCanvas:(id)arg1;
- (void)setNativeButton:(id)arg1;
- (void)performActionWithArguments:(id)arg1;
- (void)setImageWithURLString:(id)arg1 scale:(id)arg2;
- (void)setImageInsetsTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4;
- (void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2;
- (void)hideConfirmationAnimated:(BOOL)arg1;
- (id)_nativeButton;
- (id)nativeButtonOfType:(int)arg1;
- (id)_boxedNativeButton;
- (id)initWithSystemItemString:(id)arg1;
- (id)_initSUScriptButton;
- (id)buttonItem;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)action;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)dealloc;
- (id)init;
- (BOOL)enabled;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageEdgeInsets;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setAction:(id)arg1;
- (id)_action;
- (id)image;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)title;
- (void)setEnabled:(BOOL)arg1;
- (int)tag;
- (void)setTag:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (id)attributeKeys;
- (id)canvas;

@end