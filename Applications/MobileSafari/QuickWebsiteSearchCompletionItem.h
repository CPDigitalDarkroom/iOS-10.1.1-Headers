//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CompletionItem-Protocol.h"

@class NSString, QuickWebsiteSearchQuery, SFSearchResult, WBSQuickWebsiteSearchProvider;
@protocol CompletionItemActionHandler;

@interface QuickWebsiteSearchCompletionItem : NSObject <CompletionItem>
{
    SFSearchResult *_sfSearchResultValue;
    WBSQuickWebsiteSearchProvider *_searchProvider;
    QuickWebsiteSearchQuery *_searchQuery;
}

@property(readonly, nonatomic) QuickWebsiteSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(readonly, nonatomic) WBSQuickWebsiteSearchProvider *searchProvider; // @synthesize searchProvider=_searchProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue; // @synthesize sfSearchResultValue=_sfSearchResultValue;
- (id)reflectedStringForUserTypedString:(id)arg1;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (void)acceptCompletionWithActionHandler:(id)arg1;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (id)completionTableViewCellForCompletionList:(id)arg1;
- (id)completionTableViewCellReuseIdentifier;
- (id)initWithProvider:(id)arg1 query:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *completionString;
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly, nonatomic) _Bool restoresSearchState;
@property(readonly) Class superclass;

@end

