/* Generated by RuntimeBrowser.
 */

@protocol HDNanoSyncEntity <HDSyncEntity>

@required

+ (int)nanoSyncObjectType;
+ (unsigned int)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;

@optional

+ (HDSQLitePredicate *)nanoSyncPredicateForSession:(HDNanoSyncSession *)arg1;
+ (BOOL)supportsSpeculativeNanoSyncChanges;
+ (NSSet *)syncEntityDependenciesForNanoSyncProtocolVersion:(int)arg1;

@end