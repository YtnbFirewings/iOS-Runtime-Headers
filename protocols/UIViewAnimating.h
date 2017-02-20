/* Generated by RuntimeBrowser.
 */

@protocol UIViewAnimating <NSObject>

@required

- (void)finishAnimationAtPosition:(int)arg1;
- (float)fractionComplete;
- (BOOL)isReversed;
- (BOOL)isRunning;
- (void)pauseAnimation;
- (void)setFractionComplete:(float)arg1;
- (void)setReversed:(BOOL)arg1;
- (void)startAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (int)state;
- (void)stopAnimation:(BOOL)arg1;

@end