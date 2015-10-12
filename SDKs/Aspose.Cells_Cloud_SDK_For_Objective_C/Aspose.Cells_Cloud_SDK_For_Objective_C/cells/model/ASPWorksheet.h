#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "ASPLink.h"
#import "ASPColor.h"
#import "ASPLinkElement.h"


@protocol ASPWorksheet
@end

@interface ASPWorksheet : ASPObject


@property(nonatomic) NSArray<ASPLink>* links;

@property(nonatomic) NSNumber* displayRightToLeft;

@property(nonatomic) NSNumber* displayZeros;

@property(nonatomic) NSNumber* firstVisibleColumn;

@property(nonatomic) NSNumber* firstVisibleRow;

@property(nonatomic) NSString* name;

@property(nonatomic) NSNumber* index;

@property(nonatomic) NSNumber* isGridlinesVisible;

@property(nonatomic) NSNumber* isOutlineShown;

@property(nonatomic) NSNumber* isPageBreakPreview;

@property(nonatomic) NSNumber* isVisible;

@property(nonatomic) NSNumber* isProtected;

@property(nonatomic) NSNumber* isRowColumnHeadersVisible;

@property(nonatomic) NSNumber* isRulerVisible;

@property(nonatomic) NSNumber* isSelected;

@property(nonatomic) ASPColor* tabColor;

@property(nonatomic) NSNumber* transitionEntry;

@property(nonatomic) NSNumber* transitionEvaluation;

@property(nonatomic) NSString* type;

@property(nonatomic) NSString* viewType;

@property(nonatomic) NSString* visibilityType;

@property(nonatomic) NSNumber* zoom;

@property(nonatomic) ASPLinkElement* cells;

@property(nonatomic) ASPLinkElement* charts;

@property(nonatomic) ASPLinkElement* autoShapes;

@property(nonatomic) ASPLinkElement* oleObjects;

@property(nonatomic) ASPLinkElement* comments;

@property(nonatomic) ASPLinkElement* pictures;

@property(nonatomic) ASPLinkElement* mergedCells;

@property(nonatomic) ASPLinkElement* validations;

@property(nonatomic) ASPLinkElement* conditionalFormattings;

@property(nonatomic) ASPLinkElement* hyperlinks;

@end
