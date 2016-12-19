//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSString, SBAppStatusBarSettings;

@interface SBAppStatusBarSettingsAssertion : NSObject <BSDescriptionProviding>
{
    SBAppStatusBarSettings *_settings;
    unsigned long long _level;
    NSString *_reason;
}

@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, copy, nonatomic) SBAppStatusBarSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)modifySettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithStatusBarHidden:(_Bool)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3;
- (id)initWithSettings:(id)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
