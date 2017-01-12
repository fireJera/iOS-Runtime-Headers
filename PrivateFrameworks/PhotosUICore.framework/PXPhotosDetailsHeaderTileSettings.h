/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsHeaderTileSettings : PXSettings {
    float  _aspectRatio;
    BOOL  _fakeMiroViewController;
    BOOL  _forceMiroCompelling;
    float  _maximumAbsoluteHeight;
    float  _maximumHeightRelativeToScreenHeight;
    float  _movieLessTVHeight;
    BOOL  _showAlways;
    BOOL  _showSlideshow;
}

@property (nonatomic) float aspectRatio;
@property (nonatomic) BOOL fakeMiroViewController;
@property (nonatomic) BOOL forceMiroCompelling;
@property (nonatomic) float maximumAbsoluteHeight;
@property (nonatomic) float maximumHeightRelativeToScreenHeight;
@property (nonatomic) float movieLessTVHeight;
@property (nonatomic) BOOL showAlways;
@property (nonatomic) BOOL showSlideshow;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (float)aspectRatio;
- (BOOL)fakeMiroViewController;
- (BOOL)forceMiroCompelling;
- (float)maximumAbsoluteHeight;
- (float)maximumHeightRelativeToScreenHeight;
- (float)movieLessTVHeight;
- (void)setAspectRatio:(float)arg1;
- (void)setDefaultValues;
- (void)setFakeMiroViewController:(BOOL)arg1;
- (void)setForceMiroCompelling:(BOOL)arg1;
- (void)setMaximumAbsoluteHeight:(float)arg1;
- (void)setMaximumHeightRelativeToScreenHeight:(float)arg1;
- (void)setMovieLessTVHeight:(float)arg1;
- (void)setShowAlways:(BOOL)arg1;
- (void)setShowSlideshow:(BOOL)arg1;
- (BOOL)showAlways;
- (BOOL)showSlideshow;

@end