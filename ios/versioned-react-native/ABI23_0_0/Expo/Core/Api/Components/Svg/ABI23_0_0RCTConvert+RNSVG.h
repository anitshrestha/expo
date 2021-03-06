/**
 * Copyright (c) 2015-present, Horcrux.
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <QuartzCore/QuartzCore.h>
#import <CoreText/CoreText.h>
#import "ABI23_0_0RCTConvert+RNSVG.h"
#import "ABI23_0_0RNSVGCGFloatArray.h"
#import <ReactABI23_0_0/ABI23_0_0RCTConvert.h>
#import "ABI23_0_0RNSVGCGFCRule.h"
#import "ABI23_0_0RNSVGVBMOS.h"
#import "ABI23_0_0RNSVGTextAnchor.h"
#import "ABI23_0_0RNSVGUnits.h"
#import "ABI23_0_0RNSVGPathParser.h"

@class ABI23_0_0RNSVGBrush;

@interface ABI23_0_0RCTConvert (ABI23_0_0RNSVG)

+ (ABI23_0_0RNSVGTextAnchor)ABI23_0_0RNSVGTextAnchor:(id)json;
+ (ABI23_0_0RNSVGCGFCRule)ABI23_0_0RNSVGCGFCRule:(id)json;
+ (ABI23_0_0RNSVGVBMOS)ABI23_0_0RNSVGVBMOS:(id)json;
+ (ABI23_0_0RNSVGUnits)ABI23_0_0RNSVGUnits:(id)json;
+ (ABI23_0_0RNSVGCGFloatArray)ABI23_0_0RNSVGCGFloatArray:(id)json;
+ (ABI23_0_0RNSVGBrush *)ABI23_0_0RNSVGBrush:(id)json;
+ (ABI23_0_0RNSVGPathParser *)ABI23_0_0RNSVGCGPath:(NSString *)d;
+ (CGRect)ABI23_0_0RNSVGCGRect:(id)json offset:(NSUInteger)offset;
+ (CGColorRef)ABI23_0_0RNSVGCGColor:(id)json offset:(NSUInteger)offset;
+ (CGGradientRef)ABI23_0_0RNSVGCGGradient:(id)json offset:(NSUInteger)offset;

@end
