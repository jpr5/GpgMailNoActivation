//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <IMAP/NSObject-Protocol.h>

@class IMAPSyncBodiesOperation, NSOrderedSet, NSSet;

@protocol IMAPSyncBodiesOperationDelegate <NSObject>
- (void)syncBodiesOperation:(IMAPSyncBodiesOperation *)arg1 syncedBodiesForMessages:(NSOrderedSet *)arg2 downloadsToPersist:(NSOrderedSet *)arg3 messagesNeedingAttachments:(NSSet *)arg4;
@end

