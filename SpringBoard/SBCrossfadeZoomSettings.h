//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBScaleZoomSettings.h"

@class SBAnimationSettings;

@interface SBCrossfadeZoomSettings : SBScaleZoomSettings
{
    _Bool _morphWithZoom;
    SBAnimationSettings *_morphSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBAnimationSettings *morphSettings; // @synthesize morphSettings=_morphSettings;
@property _Bool morphWithZoom; // @synthesize morphWithZoom=_morphWithZoom;
- (void).cxx_destruct;
- (id)effectiveMorphAnimationSettings;
- (void)setDefaultValues;

@end
