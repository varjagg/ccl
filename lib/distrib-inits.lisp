; -*- Mode:Lisp; Package:CCL; -*-
;;;
;;; Copyright 1994-2009 Clozure Associates
;;;
;;; Licensed under the Apache License, Version 2.0 (the "License");
;;; you may not use this file except in compliance with the License.
;;; You may obtain a copy of the License at
;;;
;;;     http://www.apache.org/licenses/LICENSE-2.0
;;;
;;; Unless required by applicable law or agreed to in writing, software
;;; distributed under the License is distributed on an "AS IS" BASIS,
;;; WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
;;; See the License for the specific language governing permissions and
;;; limitations under the License.

;; distrib-inits.lisp

; Things that are in the development environment that need to be
; added to the distribution environment.

; This needs to be compiled after everything is loaded.

(in-package "CCL")

; *def-accessor-types* is used by the inspector to name slots in uvectors
(dolist (cell '#.*def-accessor-types*)
  (add-accessor-types (list (car cell)) (cdr cell)))
