.. -*- rst -*-

Register an Identity Provider
=============================

.. rest_method::  PUT /v3/OS-FEDERATION/identity_providers/{id}

Normal response codes: 201
Error response codes: 409

Request
-------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - description: description
    - enabled: enabled
    - id: id_path
    - remote_ids: remote_ids

Request Example
---------------

.. literalinclude:: federation/identity-provider/samples/register-request.json
   :language: javascript

Response
--------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - description: description
    - enabled: enabled
    - id: id_body
    - links: links
    - remote_ids: remote_ids

Response Example
----------------

.. literalinclude:: federation/identity-provider/samples/register-response.json
   :language: javascript


List identity providers
=======================

.. rest_method::  GET /v3/OS-FEDERATION/identity_providers

Normal response codes: 200

Request
-------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - id: id_query
    - enabled: enabled_query

Response
--------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - identity_providers: identity_providers

Response Example
----------------

.. literalinclude:: federation/identity-provider/samples/list-response.json
   :language: javascript


Get Identity provider
=====================

.. rest_method::  GET /v3/OS-FEDERATION/identity_providers/{id}

Normal response codes: 200

Request
-------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - id: id_path

Response
--------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - description: description
    - enabled: enabled
    - id: id_body
    - links: links
    - remote_ids: remote_ids

Response Example
----------------

.. literalinclude:: federation/identity-provider/samples/get-response.json
   :language: javascript


Delete identity provider
========================

.. rest_method::  DELETE /v3/OS-FEDERATION/identity_providers/{id}

When an identity provider is deleted, any tokens generated by that identity
provider will be revoked.

Normal response codes: 204

Request
-------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - id: id_path

Update identity provider
========================

.. rest_method::  PATCH /v3/OS-FEDERATION/identity_providers/{id}

When an identity provider is disabled, any tokens generated by that identity
provider will be revoked.

Normal response codes: 200
Error response codes: 409

Request
-------

Any attribute of an Identity Provider may be passed in the request body.

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - id: id_path

Request Example
---------------

.. literalinclude:: federation/identity-provider/samples/update-request.json
   :language: javascript

Response
--------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - description: description
    - enabled: enabled
    - id: id_body
    - links: links
    - remote_ids: remote_ids

Response Example
----------------

.. literalinclude:: federation/identity-provider/samples/update-response.json
   :language: javascript


Add a protocol and attribute mapping to an identity provider
============================================================

.. rest_method::  PUT /v3/OS-FEDERATION/identity_providers/{idp_id}/protocols/{protocol_id}

Normal response codes: 201

Request
-------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - idp_id: id_path
    - protocol_id: protocol_id
    - protocol: protocol

Request Example
---------------

.. literalinclude:: federation/identity-provider/samples/add-protocol-request.json
   :language: javascript

Response
--------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - protocol: protocol

Response Example
----------------

.. literalinclude:: federation/identity-provider/samples/add-protocol-response.json
   :language: javascript


List all protocol and attribute mappings of an identity provider
================================================================

.. rest_method::  GET /v3/OS-FEDERATION/identity_providers/{id}/protocols

Normal response codes: 200


Request
-------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - id: id_path

Response
--------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - protocols: protocols
    - links: protocols_links

Response Example
----------------

.. literalinclude:: federation/identity-provider/samples/list-protocol-response.json
   :language: javascript


Get a protocol and attribute mapping for an identity provider
=============================================================

.. rest_method::  GET /v3/OS-FEDERATION/identity_providers/{idp_id}/protocols/{protocol_id}

Normal response codes: 200

Request
-------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - idp_id: id_path
    - protocol_id: protocol_id

Response
--------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - protocol: protocol

Response Example
----------------

.. literalinclude:: federation/identity-provider/samples/get-protocol-response.json
   :language: javascript


Update the attribute mapping for an identity provider and protocol
==================================================================

.. rest_method::  PATCH /v3/OS-FEDERATION/identity_providers/{idp_id}/protocols/{protocol_id}

Normal response codes: 200

Request
-------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - idp_id: id_path
    - protocol_id: protocol_id
    - protocol: protocol

Request Example
---------------

.. literalinclude:: federation/identity-provider/samples/update-protocol-request.json
   :language: javascript

Response
--------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - protocol: protocol

Response Example
----------------

.. literalinclude:: federation/identity-provider/samples/update-protocol-response.json
   :language: javascript


Delete a protocol and attribute mapping from an identity provider
=================================================================

.. rest_method::  DELETE /v3/OS-FEDERATION/identity_providers/{idp_id}/protocols/{protocol_id}

Normal response codes: 204

Request
-------

.. rest_parameters:: federation/identity-provider/parameters.yaml

    - idp_id: id_path
    - protocol_id: protocol_id
