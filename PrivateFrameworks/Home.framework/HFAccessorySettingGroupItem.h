/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingGroupItem : HFItem <HFAccessorySettingItemProtocol> {
    HFAccessorySettingsEntity * _entity;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    HMAccessorySelectionSetting * _selectionSetting;
    HMAccessorySettingGroup * _settingGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HFAccessorySettingsEntity *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) HMAccessorySelectionSetting *selectionSetting;
@property (nonatomic, readonly) HMAccessorySettingGroup *settingGroup;
@property (nonatomic, readonly) NSString *settingKeyPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_decorateHiddenOrDisabled:(id)arg1;
- (id)_displayTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)_validateKeyPathDependencies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entity;
- (id)homeKitObject;
- (id)initWithMediaProfileContainer:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 entity:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 group:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 selectionSetting:(id)arg2;
- (id)mediaProfileContainer;
- (id)selectionSetting;
- (id)settingGroup;
- (id)settingKeyPath;

@end
