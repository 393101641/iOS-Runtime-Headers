/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKQueryOperation : FCNetworkOperation {
    CKQueryCursor * _cursor;
    FCCKDatabase * _database;
    NSArray * _desiredKeys;
    NSArray * _networkEvents;
    CKQuery * _query;
    id /* block */  _queryCompletionBlock;
    id /* block */  _recordFetchedBlock;
    NSArray * _requestUUIDs;
    CKQueryCursor * _resultCursor;
    unsigned int  _resultsLimit;
}

@property (nonatomic, retain) CKQueryCursor *cursor;
@property (nonatomic, retain) FCCKDatabase *database;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) NSArray *networkEvents;
@property (nonatomic, retain) CKQuery *query;
@property (nonatomic, copy) id /* block */ queryCompletionBlock;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, copy) NSArray *requestUUIDs;
@property (nonatomic, retain) CKQueryCursor *resultCursor;
@property (nonatomic) unsigned int resultsLimit;

- (void).cxx_destruct;
- (id)_ckCursorFromQueryResponse:(id)arg1;
- (id)_ckRecordsFromQueryResponse:(id)arg1;
- (id)cursor;
- (id)database;
- (id)desiredKeys;
- (id)init;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)query;
- (id /* block */)queryCompletionBlock;
- (id /* block */)recordFetchedBlock;
- (id)requestOperations;
- (id)requestUUIDs;
- (id)resultCursor;
- (unsigned int)resultsLimit;
- (void)setCursor:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setNetworkEvents:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryCompletionBlock:(id /* block */)arg1;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setRequestUUIDs:(id)arg1;
- (void)setResultCursor:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (BOOL)validateOperation;

@end