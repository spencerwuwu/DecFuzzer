#ifndef s729r2_H
#define s729r2_H

#include "w2c2_base.h"

typedef struct s729r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s729r2Instance;

void f0(s729r2Instance*);

void f1(s729r2Instance*);

U32 f2(s729r2Instance*);

void f3(s729r2Instance*,U32);

U32 f4(s729r2Instance*,U32,U32,U32,U32,U32);

void f5(s729r2Instance*,U32,U32,U32,U32,U32);

void f6(s729r2Instance*,U32);

void f7(s729r2Instance*,U32,U32,U32);

void f8(s729r2Instance*,U32,U32,U32);

void s729r2____wasm_call_ctors(s729r2Instance*i);

void s729r2____wasm_apply_data_relocs(s729r2Instance*i);

U32 s729r2_func_1(s729r2Instance*i);

void s729r2_call_cb(s729r2Instance*i,U32 l0);

void s729r2Instantiate(s729r2Instance* instance, void* resolve(const char* module, const char* name));

void s729r2FreeInstance(s729r2Instance* instance);

#endif /* s729r2_H */

