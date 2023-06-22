#ifndef s178r2_H
#define s178r2_H

#include "w2c2_base.h"

typedef struct s178r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s178r2Instance;

void f0(s178r2Instance*);

void f1(s178r2Instance*);

U32 f2(s178r2Instance*);

void f3(s178r2Instance*,U32);

U32 f4(s178r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s178r2Instance*,U32,U32,U32,U32,U32);

void f6(s178r2Instance*,U32);

void f7(s178r2Instance*,U32,U32,U32);

void f8(s178r2Instance*,U32,U32,U32);

void s178r2____wasm_call_ctors(s178r2Instance*i);

void s178r2____wasm_apply_data_relocs(s178r2Instance*i);

U32 s178r2_func_1(s178r2Instance*i);

void s178r2_call_cb(s178r2Instance*i,U32 l0);

void s178r2Instantiate(s178r2Instance* instance, void* resolve(const char* module, const char* name));

void s178r2FreeInstance(s178r2Instance* instance);

#endif /* s178r2_H */

