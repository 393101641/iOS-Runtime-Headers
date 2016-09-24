/* Generated by RuntimeBrowser.
 */

@protocol MTLCommandBufferSPI <MTLCommandBuffer>

@required

- (BOOL)isProfilingEnabled;
- (NSDictionary *)profilingResults;
- (void)setProfilingEnabled:(BOOL)arg1;
- (NSMutableDictionary *)userDictionary;

@optional

- (double)GPUEndTime;
- (double)GPUStartTime;
- (void)commitAndHold;
- (<MTLDebugCommandEncoder> *)debugCommandEncoder;
- (<MTLFragmentRenderCommandEncoder> *)fragmentRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (unsigned int)getListIndex;
- (double)kernelEndTime;
- (double)kernelStartTime;
- (<MTLComputeCommandEncoder> *)sampledComputeCommandEncoderWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1 capacity:(unsigned int)arg2;
- (<MTLFragmentRenderCommandEncoder> *)sampledFragmentRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg2 capacity:(unsigned int)arg3;
- (<MTLRenderCommandEncoder> *)sampledRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg2 capacity:(unsigned int)arg3;
- (void)setListIndex:(unsigned int)arg1;

@end