/* Generated by RuntimeBrowser.
 */

@protocol TSPDecoder <NSObject>

@required

- (<TSUStreamReadChannel> *)newReadChannelForDataWithIdentifier:(int)arg1 info:(id <TSPDecoderDataInfo>)arg2;
- (<TSUStreamReadChannel> *)newReadChannelForMetadata;
- (<TSUStreamReadChannel> *)newReadChannelForRootObjectComponent;

@end