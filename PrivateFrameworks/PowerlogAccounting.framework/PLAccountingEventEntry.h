/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

@interface PLAccountingEventEntry : PLEntry {
    PLAccountingRange * _range;
    BOOL  _used;
}

@property (nonatomic, readonly) int instanceDirectionality;
@property (nonatomic, retain) PLAccountingRange *range;
@property (nonatomic) BOOL used;

+ (int)classDirectionality;

- (void).cxx_destruct;
- (BOOL)canMergeWithEvent:(id)arg1;
- (id)initWithRange:(id)arg1;
- (int)instanceDirectionality;
- (BOOL)isEmptyEvent;
- (BOOL)isEqualContentsWithEvent:(id)arg1;
- (void)mergeWithEvent:(id)arg1;
- (id)range;
- (id)rangeSinceEvent:(id)arg1;
- (void)setRange:(id)arg1;
- (void)setUsed:(BOOL)arg1;
- (BOOL)used;

@end