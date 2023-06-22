#ifndef s178retdec_H
#define s178retdec_H

#include "w2c2_base.h"

typedef struct s178retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s178retdecInstance;

void f0(s178retdecInstance*);

void f1(s178retdecInstance*);

U32 f2(s178retdecInstance*);

void f3(s178retdecInstance*,U32);

U32 f4(s178retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s178retdecInstance*,U32,U32,U32,U32,U32);

void f6(s178retdecInstance*,U32);

void f7(s178retdecInstance*,U32,U32,U32);

void f8(s178retdecInstance*,U32,U32,U32);

void s178retdec____wasm_call_ctors(s178retdecInstance*i);

void s178retdec____wasm_apply_data_relocs(s178retdecInstance*i);

U32 s178retdec_func_1(s178retdecInstance*i);

void s178retdec_call_cb(s178retdecInstance*i,U32 l0);

void s178retdecInstantiate(s178retdecInstance* instance, void* resolve(const char* module, const char* name));

void s178retdecFreeInstance(s178retdecInstance* instance);

#endif /* s178retdec_H */

