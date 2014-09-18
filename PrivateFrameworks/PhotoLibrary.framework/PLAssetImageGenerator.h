/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class AVAssetImageGenerator;

@interface PLAssetImageGenerator : NSObject {
    AVAssetImageGenerator *_imageGenerator;
    bool_inUse;
}

@property(retain) AVAssetImageGenerator * imageGenerator;
@property bool inUse;

- (void)dealloc;
- (id)imageGenerator;
- (bool)inUse;
- (id)initWithAsset:(id)arg1;
- (void)setImageGenerator:(id)arg1;
- (void)setInUse:(bool)arg1;

@end