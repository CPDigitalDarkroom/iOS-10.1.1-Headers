//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUISettings.h"

@class SBBounceSettings;

@interface SBNotificationCenterSettings : SBUISettings
{
    SBBounceSettings *_bounceSettings;
    double _grabberAnimationDuration;
    double _actionButtonVibrantTintLevel;
    double _actionButtonVibrantTintAlpha;
    double _actionButtonSelectedVibrantTintLevel;
    double _actionButtonSelectedVibrantTintAlpha;
    double _actionButtonOverlayTintLevel;
    double _actionButtonOverlayTintAlpha;
    double _actionButtonSelectedOverlayTintLevel;
    double _actionButtonSelectedOverlayTintAlpha;
    double _modeButtonTintLevel;
    double _modeButtonTintAlpha;
    double _modeLabelTintLevel;
    double _modeLabelTintAlpha;
}

+ (id)settingsControllerModule;
@property(nonatomic) double modeLabelTintAlpha; // @synthesize modeLabelTintAlpha=_modeLabelTintAlpha;
@property(nonatomic) double modeLabelTintLevel; // @synthesize modeLabelTintLevel=_modeLabelTintLevel;
@property(nonatomic) double modeButtonTintAlpha; // @synthesize modeButtonTintAlpha=_modeButtonTintAlpha;
@property(nonatomic) double modeButtonTintLevel; // @synthesize modeButtonTintLevel=_modeButtonTintLevel;
@property(nonatomic) double actionButtonSelectedOverlayTintAlpha; // @synthesize actionButtonSelectedOverlayTintAlpha=_actionButtonSelectedOverlayTintAlpha;
@property(nonatomic) double actionButtonSelectedOverlayTintLevel; // @synthesize actionButtonSelectedOverlayTintLevel=_actionButtonSelectedOverlayTintLevel;
@property(nonatomic) double actionButtonOverlayTintAlpha; // @synthesize actionButtonOverlayTintAlpha=_actionButtonOverlayTintAlpha;
@property(nonatomic) double actionButtonOverlayTintLevel; // @synthesize actionButtonOverlayTintLevel=_actionButtonOverlayTintLevel;
@property(nonatomic) double actionButtonSelectedVibrantTintAlpha; // @synthesize actionButtonSelectedVibrantTintAlpha=_actionButtonSelectedVibrantTintAlpha;
@property(nonatomic) double actionButtonSelectedVibrantTintLevel; // @synthesize actionButtonSelectedVibrantTintLevel=_actionButtonSelectedVibrantTintLevel;
@property(nonatomic) double actionButtonVibrantTintAlpha; // @synthesize actionButtonVibrantTintAlpha=_actionButtonVibrantTintAlpha;
@property(nonatomic) double actionButtonVibrantTintLevel; // @synthesize actionButtonVibrantTintLevel=_actionButtonVibrantTintLevel;
@property double grabberAnimationDuration; // @synthesize grabberAnimationDuration=_grabberAnimationDuration;
@property(retain, nonatomic) SBBounceSettings *bounceSettings; // @synthesize bounceSettings=_bounceSettings;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end
