// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-
//
// algParam: A class that holds all of the algorithm parameters that can be adapted
//
// Copyright (C) 2017         Dirk Eddelbuettel, Adam Johansen and Leah South
//
// This file is part of RcppSMC.
//
// RcppSMC is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// RcppSMC is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with RInside.  If not, see <http://www.gnu.org/licenses/>.


//! \file
//! \brief A base class containing algorithm parameters and virtual
//! functions to adapt them.
//!

#ifndef __SMC_ALGPARAM_H
#define __SMC_ALGPARAM_H 1.0

#include <population.h>


namespace smc {

    /// A base class which contains the algorithm parameters and virtual functions to adapt them.
    template <class Space, class Params> class algParam {

    protected:
        Params param;

    public:

        /// Free the workspace allocated for the algorithm parameters.
        virtual ~algParam() {
        }

        /// Holder function for updates to be done before the move step.
        virtual void updateForMove(const population<Space> & pop) {}

        /// Holder function for updates to be done before the MCMC step.
        virtual void updateForMCMC(const population<Space> & pop, double acceptProb, int nResampled, int & nRepeats) {}

        /// Holder function for updates to be done at the end of each iteration.
        virtual void updateEnd(const population<Space> & pop) {}

        /// Returns the parameters.
        const Params & GetParams(void) const {return param;}
    };
}


#endif
