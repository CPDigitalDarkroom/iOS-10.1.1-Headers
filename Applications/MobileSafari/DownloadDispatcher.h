//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "_WKDownloadDelegate-Protocol.h"

@class NSString;

@interface DownloadDispatcher : NSObject <_WKDownloadDelegate>
{
}

- (void)_downloadDidCancel:(id)arg1;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_downloadDidFinish:(id)arg1;
- (id)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 allowOverwrite:(_Bool *)arg3;
- (void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_downloadDidStart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

