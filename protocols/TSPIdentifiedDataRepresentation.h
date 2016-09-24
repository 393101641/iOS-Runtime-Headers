/* Generated by RuntimeBrowser.
 */

@protocol TSPIdentifiedDataRepresentation <NSObject>

@required

- (int)identifier;
- (BOOL)isLoaded;
- (BOOL)setDataRepresentation:(SFUDataRepresentation *)arg1 shouldCopy:(BOOL)arg2 error:(id*)arg3;

@optional

- (BOOL)fromExternalReference;
- (void)setFileStateIdentifier:(NSString *)arg1;
- (void)setRelativeDataPath:(NSString *)arg1;

@end