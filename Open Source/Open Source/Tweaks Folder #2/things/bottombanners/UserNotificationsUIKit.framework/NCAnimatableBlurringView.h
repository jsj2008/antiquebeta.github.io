/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCAnimatableBlurringView : UIView <NCBlurring> {
    bool  _didConfigureBlurFilter;
    double  _inputRadius;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double inputRadius;
@property (readonly) Class superclass;

+ (id)_inputRadiusKeyPath;

- (void)_configureBlurFilterIfNecessary;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (double)inputRadius;
- (void)setInputRadius:(double)arg1;

@end
