//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MFSnippetCalculatorDelegate.h"

@class MFSnippetCalculator, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface MFSnippetManager : NSObject <MFSnippetCalculatorDelegate>
{
    NSMutableSet *_messagesNeedingBodies;	// 8 = 0x8
    id _pendingSnippetsLock;	// 16 = 0x10
    NSMutableDictionary *_pendingSnippetDictionariesByStore;	// 24 = 0x18
    BOOL _queuedUpdate;	// 32 = 0x20
    MFSnippetCalculator *_snippetCalculator;	// 40 = 0x28
    NSOperationQueue *_snippetCommitQueue;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000000026a3af
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026a2f5
+ (id)log;	// IMP=0x000000000026a296
@property(readonly, nonatomic) NSOperationQueue *snippetCommitQueue; // @synthesize snippetCommitQueue=_snippetCommitQueue;
@property(readonly, nonatomic) MFSnippetCalculator *snippetCalculator; // @synthesize snippetCalculator=_snippetCalculator;
- (void).cxx_destruct;	// IMP=0x000000000026b80e
- (void)_commitPendingSnippets;	// IMP=0x000000000026b5e0
- (void)_queueCommitPendingSnippets;	// IMP=0x000000000026b557
- (void)didCalculateSnippet:(id)arg1 forMessage:(id)arg2;	// IMP=0x000000000026af9d
- (void)_messageBodyDataAvailable:(id)arg1;	// IMP=0x000000000026ae7e
- (id)fetchSnippetsForMessages:(id)arg1;	// IMP=0x000000000026a6fb
- (void)dealloc;	// IMP=0x000000000026a5f5
- (id)init;	// IMP=0x000000000026a47a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

