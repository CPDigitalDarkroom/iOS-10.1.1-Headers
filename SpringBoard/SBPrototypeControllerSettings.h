//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUISettings.h"

@class NSString;

@interface SBPrototypeControllerSettings : SBUISettings
{
    _Bool _preventLockover;
    NSString *_testRecipeClassName;
    double _windowAlpha;
}

@property _Bool preventLockover; // @synthesize preventLockover=_preventLockover;
@property double windowAlpha; // @synthesize windowAlpha=_windowAlpha;
@property(retain) NSString *testRecipeClassName; // @synthesize testRecipeClassName=_testRecipeClassName;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end
