/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFUUDecoder : MFBaseFilterDataConsumer  {
    unsigned long _begin;
    unsigned long _end;
    unsigned long _length;
    unsigned long _readBytes;
    unsigned char _encoded[4];
    BOOL _beginComplete;
    BOOL _dataComplete;
    BOOL _validLength;
    BOOL _lineComplete;
    BOOL _passthrough;
}


- (int)appendData:(id)arg1;
- (void)done;

@end