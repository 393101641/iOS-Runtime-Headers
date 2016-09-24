/* Generated by RuntimeBrowser.
 */

@protocol TSPComponentDelegate <NSObject>

@required

- (void)cacheComponent:(TSPComponent *)arg1 isDiscardingContent:(BOOL)arg2;
- (TSPObjectContext *)context;
- (void)continueCacheOperationUsingBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)didModifyFlushedComponent:(TSPComponent *)arg1 forObject:(TSPObject *)arg2;
- (void)flushComponent:(TSPComponent *)arg1 isDiscardingContent:(BOOL)arg2;
- (BOOL)isActive;
- (TSPObject *)objectForIdentifier:(int)arg1;
- (void)performCacheOperationUsingBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (BOOL)shouldKeepAllCachedObjectsInMemory;

@end