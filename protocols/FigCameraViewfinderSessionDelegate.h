/* Generated by RuntimeBrowser.
 */

@protocol FigCameraViewfinderSessionDelegate <NSObject>

@optional

- (void)cameraViewfinderSession:(FigCameraViewfinderSession *)arg1 didCapturePhotoWithStatus:(long)arg2 thumbnailData:(NSData *)arg3 timestamp:(struct { int x1; int x2; unsigned int x3; int x4; })arg4;
- (void)cameraViewfinderSession:(FigCameraViewfinderSession *)arg1 previewStreamDidCloseWithStatus:(long)arg2;
- (void)cameraViewfinderSessionPreviewStreamDidOpen:(FigCameraViewfinderSession *)arg1;

@end