//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSDictionary;

@interface MFMessageSortingInformation : NSObject
{
    BOOL _skipAutomaticSecondarySort;	// 8 = 0x8
    NSDictionary *_sortValues;	// 16 = 0x10
}

@property(retain, nonatomic) NSDictionary *sortValues; // @synthesize sortValues=_sortValues;
@property(nonatomic) BOOL skipAutomaticSecondarySort; // @synthesize skipAutomaticSecondarySort=_skipAutomaticSecondarySort;
- (void)dealloc;	// IMP=0x00000000001de191

@end

