//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTaskHandlerOperation.h"

@interface IMAPPersistenceTaskOperation : MCTaskHandlerOperation
{
    id <IMAPMessageDataSource> _dataSource;	// 24 = 0x18
}

@property(readonly, nonatomic) id <IMAPMessageDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000000053c00
- (id)_messagesForPersistentIDs:(id)arg1;	// IMP=0x0000000000053a35
- (id)description;	// IMP=0x0000000000053985
- (id)init;	// IMP=0x00000000000538b6
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000053847

@end
