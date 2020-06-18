//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

#import <EDMailboxProvider-Protocol.h>

@class MFMailboxTransformer, NSString;
@protocol EDAccountsProvider, EDMailboxProviderDelegate;

@interface MFMailboxProvider : NSObject <EDMailboxProvider>
{
    id /*<EDMailboxProviderDelegate>*/ delegate;
    id /*<EDAccountsProvider>*/ _accountsProvider;
    MFMailboxTransformer *_mailboxTransformer;
}

@property(retain, nonatomic) MFMailboxTransformer *mailboxTransformer; // @synthesize mailboxTransformer=_mailboxTransformer;
@property(retain, nonatomic) id /*<EDAccountsProvider>*/ accountsProvider; // @synthesize accountsProvider=_accountsProvider;
@property(nonatomic) __weak id /*<EDMailboxProviderDelegate>*/ delegate; // @synthesize delegate;
//- (void).cxx_destruct;
- (long long)mailboxTypeForMailboxObjectID:(id)arg1;
- (id)mailboxObjectIDsForMailboxType:(long long)arg1;
- (id)legacyMailboxForObjectID:(id)arg1;
- (id)mailboxForObjectID:(id)arg1;
- (void)_mailboxInvalidated:(id)arg1;
- (void)fetchMailboxes;
- (id)allMailboxes;
- (id)initWithAccountsProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
