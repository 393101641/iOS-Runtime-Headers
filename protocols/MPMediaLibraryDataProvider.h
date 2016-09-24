/* Generated by RuntimeBrowser.
 */

@protocol MPMediaLibraryDataProvider <NSObject>

@required

- (<MPArtworkDataSource> *)artworkDataSource;
- (<MPMediaLibraryResultSet> *)collectionResultSetForQueryCriteria:(MPMediaQueryCriteria *)arg1;
- (MPMediaEntityCache *)entityCache;
- (<MPMediaLibraryResultSet> *)itemResultSetForQueryCriteria:(MPMediaQueryCriteria *)arg1;
- (void)loadProperties:(void *)arg1 ofCollectionWithIdentifier:(void *)arg2 groupingType:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 9: NSSet *, int, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)loadProperties:(void *)arg1 ofItemWithIdentifier:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: NSSet *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)loadQueryCriteria:(void *)arg1 countOfCollectionsWithCompletionBlock:(void *)arg2; // needs 2 arg types, found 7: MPMediaQueryCriteria *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, void*
- (void)loadQueryCriteria:(void *)arg1 countOfItemsWithCompletionBlock:(void *)arg2; // needs 2 arg types, found 7: MPMediaQueryCriteria *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, void*
- (void)loadQueryCriteria:(void *)arg1 hasCollectionsWithCompletionBlock:(void *)arg2; // needs 2 arg types, found 7: MPMediaQueryCriteria *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)loadQueryCriteria:(void *)arg1 hasItemsWithCompletionBlock:(void *)arg2; // needs 2 arg types, found 7: MPMediaQueryCriteria *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)loadValueForAggregateFunction:(void *)arg1 onCollectionsForProperty:(void *)arg2 queryCriteria:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSString *, MPMediaQueryCriteria *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (void)loadValueForAggregateFunction:(void *)arg1 onItemsForProperty:(void *)arg2 queryCriteria:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSString *, MPMediaQueryCriteria *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (NSString *)name;
- (NSString *)uniqueIdentifier;

@optional

- (void)connectWithAuthenticationData:(void *)arg1 completionBlock:(void *)arg2 progressHandler:(void *)arg3; // needs 3 arg types, found 14: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*, id /* block */, void*, void, id /* block */, float, void*
- (void)disconnect;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(void *)arg1 ordered:(void *)arg2 cancelBlock:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 15: MPMediaQueryCriteria *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, BOOL, id /* block */, void*, id /* block */, void*, void, id /* block */, int, NSDictionary *, BOOL*, void*
- (void)enumerateEntityChangesAfterSyncAnchor:(void *)arg1 maximumRevisionType:(void *)arg2 inUsersLibrary:(void *)arg3 itemBlock:(void *)arg4 collectionBlock:(void *)arg5; // needs 5 arg types, found 22: NSString *, int, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSString *, int, BOOL*, void*, id /* block */, void*, void, id /* block */, int, int, NSString *, int, BOOL*, void*
- (void)enumerateItemIdentifiersForQueryCriteria:(void *)arg1 ordered:(void *)arg2 cancelBlock:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 14: MPMediaQueryCriteria *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, BOOL, id /* block */, void*, id /* block */, void*, void, id /* block */, int, BOOL*, void*
- (NSSet *)propertiesToCache;
- (BOOL)requiresAuthentication;
- (void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(int)arg1 additionalFilterPredicates:(NSArray *)arg2;
- (void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(int)arg1 additionalFilterPredicates:(NSArray *)arg2;
- (void)setLibraryPublicContainerFilterPredicatesWithCloudFilteringType:(int)arg1 additionalFilterPredicates:(NSArray *)arg2;
- (void)setLibraryPublicEntityFilterPredicatesWithCloudFilteringType:(int)arg1 additionalFilterPredicates:(NSArray *)arg2;
- (NSString *)syncValidity;

@end