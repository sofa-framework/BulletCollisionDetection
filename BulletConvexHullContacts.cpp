#include "BulletConvexHullModel.h"
#include <SofaMeshCollision/BarycentricPenalityContact.inl>
#include <SofaMeshCollision/BarycentricContactMapper.inl>
#include "BulletConvexHullContactMapper.h"
#include <SofaConstraint/FrictionContact.h>
#include <SofaConstraint/BarycentricDistanceLMConstraintContact.inl>

namespace sofa
{

namespace component
{

namespace collision
{


using namespace defaulttype;
using simulation::Node;
using core::collision::Contact;

Creator<Contact::Factory, BarycentricPenalityContact<BulletConvexHullModel, BulletConvexHullModel> > BulletConvexHullModelBulletConvexHullContactClass("default",true);
Creator<Contact::Factory, BarycentricPenalityContact<BulletConvexHullModel, SphereCollisionModel<sofa::defaulttype::Vec3Types>> > BulletConvexHullModelSphereModelContactClass("default",true);
Creator<Contact::Factory, BarycentricPenalityContact<BulletConvexHullModel, RigidSphereModel> > BulletConvexHullModelRigidSphereModelContactClass("default",true);
Creator<Contact::Factory, BarycentricPenalityContact<BulletConvexHullModel, TriangleCollisionModel<sofa::defaulttype::Vec3Types>> > BulletConvexHullModelTriangleModelContactClass("default",true);
Creator<Contact::Factory, BarycentricPenalityContact<BulletConvexHullModel, LineCollisionModel<sofa::defaulttype::Vec3Types>> > BulletConvexHullModelLineModelContactClass("default",true);
Creator<Contact::Factory, BarycentricPenalityContact<BulletConvexHullModel, PointCollisionModel<sofa::defaulttype::Vec3Types>> > BulletConvexHullModelPointModelContactClass("default",true);
Creator<Contact::Factory, BarycentricPenalityContact<BulletConvexHullModel, OBBCollisionModel<sofa::defaulttype::Rigid3Types>> > BulletConvexHullModelOBBModelContactClass("default",true);
Creator<Contact::Factory, BarycentricPenalityContact<BulletConvexHullModel, CapsuleCollisionModel<sofa::defaulttype::Vec3Types>> > BulletConvexHullModelCapsuleModelContactClass("default",true);
Creator<Contact::Factory, BarycentricPenalityContact<BulletConvexHullModel, CapsuleCollisionModel<sofa::defaulttype::Rigid3Types>> > BulletConvexHullModelRigidCapsuleModelContactClass("default",true);
Creator<Contact::Factory, BarycentricPenalityContact<BulletConvexHullModel, CylinderCollisionModel<sofa::defaulttype::Rigid3Types>> > BulletConvexHullModelCylinderModelContactClass("default",true);


Creator<Contact::Factory, BarycentricDistanceLMConstraintContact<BulletConvexHullModel, BulletConvexHullModel> > BCHullBCHullLMConstraintContactClassClass("distanceLMConstraint",true);
Creator<Contact::Factory, BarycentricDistanceLMConstraintContact<BulletConvexHullModel, CylinderCollisionModel<sofa::defaulttype::Rigid3Types>> > BCHullCylinderLMConstraintContactClassClass("distanceLMConstraint",true);
Creator<Contact::Factory, BarycentricDistanceLMConstraintContact<BulletConvexHullModel, TriangleCollisionModel<sofa::defaulttype::Vec3Types>> > BCHullTriangleLMConstraintContactClassClass("distanceLMConstraint",true);
Creator<Contact::Factory, BarycentricDistanceLMConstraintContact<BulletConvexHullModel, CapsuleCollisionModel<sofa::defaulttype::Rigid3Types>> > BCHullRigidCapsuleLMConstraintContactClassClass("distanceLMConstraint",true);
Creator<Contact::Factory, BarycentricDistanceLMConstraintContact<BulletConvexHullModel, CapsuleCollisionModel<sofa::defaulttype::Vec3Types>> > CapsuleBCHullLMConstraintContactClassClass("distanceLMConstraint",true);
Creator<Contact::Factory, BarycentricDistanceLMConstraintContact<BulletConvexHullModel, SphereCollisionModel<sofa::defaulttype::Vec3Types>> > BCHullSphereLMConstraintContactClassClass("distanceLMConstraint",true);
Creator<Contact::Factory, BarycentricDistanceLMConstraintContact<BulletConvexHullModel, RigidSphereModel> > BCHullRigidSphereLMConstraintContactClassClass("distanceLMConstraint",true);
Creator<Contact::Factory, BarycentricDistanceLMConstraintContact<BulletConvexHullModel, OBBCollisionModel<sofa::defaulttype::Rigid3Types>> > BCHullOBBLMConstraintContactClassClass("distanceLMConstraint",true);

}
}
}
