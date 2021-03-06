//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSArray, NSDictionary;

@interface MFSQLRow : NSObject
{
    struct sqlite3_stmt *_statement;	// 8 = 0x8
    NSArray *_indexedColumns;	// 16 = 0x10
    NSDictionary *_namedColumns;	// 24 = 0x18
}

@property(readonly, copy, nonatomic) NSDictionary *namedColumns; // @synthesize namedColumns=_namedColumns;
@property(readonly, copy, nonatomic) NSArray *indexedColumns; // @synthesize indexedColumns=_indexedColumns;
@property(readonly, nonatomic) struct sqlite3_stmt *statement; // @synthesize statement=_statement;
- (void).cxx_destruct;	// IMP=0x0000000000273a79
- (id)debugDescription;	// IMP=0x000000000027373f
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000273642
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000002735e3
- (id)init;	// IMP=0x0000000000273514
- (id)initWithStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x000000000027334f

@end

