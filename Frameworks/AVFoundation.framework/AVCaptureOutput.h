/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureOutputInternal;



@interface AVCaptureOutput : NSObject 
{
    AVCaptureOutputInternal *_outputInternal;
}

@property(readonly) NSArray *connections;


- (id)init;
- (void)dealloc;
- (id)firstEnabledConnectionForMediaType:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (id)activeConnections;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)bumpChangeSeed;
- (NSInteger)changeSeed;
- (id)notReadyError;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (void)didStartForSession:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)connections;

@end