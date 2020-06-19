//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSHashTable, NSImageView;

@interface ViewingPaneView : NSView
{
    NSHashTable *_topAlignedSubviews;	// 152 = 0x98
    NSHashTable *_managedConstraints;	// 160 = 0xa0
    BOOL _isVertical;	// 168 = 0xa8
    NSView *_singleMessageLoadingView;	// 176 = 0xb0
    NSImageView *_snapshotView;	// 184 = 0xb8
    NSView *_contentView;	// 192 = 0xc0
}

+ (BOOL)automaticallyNotifiesObserversOfContentView;	// IMP=0x0000000100316485
@property(nonatomic) BOOL isVertical; // @synthesize isVertical=_isVertical;
@property(readonly, nonatomic) NSImageView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(readonly, nonatomic) NSView *singleMessageLoadingView; // @synthesize singleMessageLoadingView=_singleMessageLoadingView;
- (void).cxx_destruct;	// IMP=0x00000001003170bc
- (void)setLoadingOption:(long long)arg1;	// IMP=0x0000000100317032
- (void)viewDidMoveToWindow;	// IMP=0x000000010031701b
- (void)updateConstraints;	// IMP=0x000000010031696c
- (void)_showSnapshot;	// IMP=0x0000000100316703
- (void)_showSingleMessageLoadingView;	// IMP=0x00000001003166c4
- (void)_hideSnapshot;	// IMP=0x0000000100316620
- (void)_hideSingleMessageLoadingView;	// IMP=0x00000001003165de
- (void)setContentView:(id)arg1 titlebarAligned:(BOOL)arg2;	// IMP=0x000000010031648d
@property(readonly, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
- (void)_createSnapshotView;	// IMP=0x000000010001f0df
- (void)_createSingleMessageLoadingView;	// IMP=0x0000000100316321
- (void)_createBackdropView;	// IMP=0x000000010031628b
- (void)_viewingPaneViewCommonInit;	// IMP=0x000000010001f00e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100316246
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010001efa6

@end
