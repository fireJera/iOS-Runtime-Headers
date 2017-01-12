/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugDevice : MTLToolsDevice {
    NSMutableSet * _buffersAlreadyChecksummedInFrame;
    unsigned int  _frameNum;
    BOOL  _prevResourceTrackingEnabled;
    BOOL  _resourceTrackingChecksummingEnabled;
    BOOL  _resourceTrackingChecksummingForceAll;
    BOOL  _resourceTrackingEnabled;
}

@property (nonatomic) unsigned int frameNum;
@property (nonatomic, readonly) BOOL resourceTrackingChecksummingEnabled;
@property (nonatomic, readonly) BOOL resourceTrackingChecksummingForceAll;
@property (nonatomic, readonly) BOOL resourceTrackingEnabled;

- (void).cxx_destruct;
- (void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned int)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_resourceTrackingChecksummingEndOfFrame;
- (void)bufferChecksummedInFrame:(id)arg1;
- (unsigned int)checksumBuffer:(id)arg1;
- (unsigned int)frameNum;
- (struct { unsigned int x1; unsigned int x2; })heapBufferSizeAndAlignWithLength:(unsigned int)arg1 options:(unsigned int)arg2;
- (struct { unsigned int x1; unsigned int x2; })heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3 deallocator:(id /* block */)arg4;
- (id)newBufferWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)newBufferWithLength:(unsigned int)arg1 options:(unsigned int)arg2;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned int)arg1;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned int)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned int x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(BOOL)arg2;
- (id)newTextureWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 descriptor:(id)arg3 deallocator:(id /* block */)arg4;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned int)arg3;
- (BOOL)overrideResourceTrackingEnabled:(BOOL)arg1;
- (BOOL)resourceTrackingChecksummingEnabled;
- (BOOL)resourceTrackingChecksummingForceAll;
- (BOOL)resourceTrackingEnabled;
- (void)resourceTrackingEndOfFrame;
- (BOOL)restoreResourceTrackingEnabled;
- (void)setFrameNum:(unsigned int)arg1;
- (void)validateMemorylessResource:(id)arg1;
- (void)validateNewBufferArgs:(unsigned int)arg1 options:(unsigned int)arg2;
- (void)validateResourceOptions:(unsigned int)arg1 isTexture:(BOOL)arg2 isIOSurface:(BOOL)arg3;

@end